package main

import (
	"flag"
	"log"
	"net/http"
	"os"
	"time"
)

func main() {
	configPath := flag.String("config", "/etc/vm2api-magpie/kernel.json", "path to kernel config")
	flag.Parse()
	config, token, apiKey, err := loadConfig(*configPath)
	if err != nil {
		log.Printf("magpie-kernel config error: %v", err)
		os.Exit(2)
	}
	kernel, err := newKernel(config, token, apiKey)
	if err != nil {
		log.Printf("magpie-kernel init error: %v", err)
		os.Exit(2)
	}
	listener, err := listen(config)
	if err != nil {
		log.Printf("magpie-kernel listen error: %v", err)
		os.Exit(1)
	}
	server := &http.Server{Handler: kernel, ReadHeaderTimeout: 5 * time.Second}
	log.Printf("magpie-kernel ready socket=%s slots=%d", config.Socket, len(config.Slots))
	if err := server.Serve(listener); err != nil && err != http.ErrServerClosed {
		log.Printf("magpie-kernel serve error: %v", err)
		os.Exit(1)
	}
}
