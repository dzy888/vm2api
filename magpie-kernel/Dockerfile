FROM golang:1.27-alpine AS build

WORKDIR /src
COPY go.mod ./
COPY *.go ./
RUN CGO_ENABLED=0 go build -trimpath -ldflags="-s -w" -o /out/magpie-kernel .

FROM gcr.io/distroless/static-debian12:nonroot
COPY --from=build /out/magpie-kernel /magpie-kernel
USER nonroot:nonroot
ENTRYPOINT ["/magpie-kernel"]
